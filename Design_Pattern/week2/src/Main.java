/*
Factory Method Pattern
- 팩토리 메소드 패턴에서 템플릿 메소드 패턴의 사용됨을 안다.
  - 하나의 함수가 여러 단계로 나누어 진다.
- 팩토리 메소드 패턴에서의 구조와 구현의 분리를 이해하고 구조와 구현의 분리의 장점을 안다.
  - 프레임워크와 concrete로 분리했음 -> concrete의 Creator를 수정하더라도 프레임워크, 메인에서 수정하지 않아도 괜찮음

Singleton Pattern
- 객체 : 속성과 기능을 갖춘 것
- 클래스 : 속성과 기능을 정의한 것
- 인스턴스 : 속성과 기능을 가진 젓 중에 실제 하는 것
- 객체 -> 인스턴스, 클래스 포함

- 하나만 생성해야할 객체를 위한 패턴

Prototype Patteern
- 복잡한 인스턴스를 복사할 수 있다.
- 생산 비용이 높은 인스턴스를 통해서 쉽게 생성 할 수 있도록 하는 패턴
- 인스턴스 생산 비용이 높은 경우
  - 종류가 너무 많아서 클래스로 정리되지 않는 경우
  - 클래스로부터 인스턴스 생성이 어려운 경우
=> 결국 cloneable로 복사할 수 있다고 명시적으로 선언하고 clone 함수를 통해서 복사하는 듯
 */

import factory_method_pattern.concrete.HpCreator;
import factory_method_pattern.concrete.MpCreator;
import factory_method_pattern.framework.Item;
import factory_method_pattern.framework.ItemCreator;
import prototype_pattern.Circle;
import prototype_pattern.deep_shallow.Age;
import prototype_pattern.deep_shallow.Cat;
import singletone_pattern.SystemSpeaker;

public class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
//        ItemCreator creator;
//        Item item;
//
//        creator = new HpCreator();
//        item = creator.create();
//
//        item.use();
//
//        creator = new MpCreator();
//        creator.create();
//
//        item.use();

        // SystemSpeaker speaker = new SystemSpeaker(); // private 이기 때문에 생성자 호출 불가
//        SystemSpeaker speaker1 = SystemSpeaker.getInstance(); // 새로 생성
//        SystemSpeaker speaker2 = SystemSpeaker.getInstance(); // 이미 생성
//
//        System.out.println(speaker1.getVolume());
//        System.out.println(speaker2.getVolume());
//
//        speaker1.setVolume(11);
//
//        System.out.println(speaker1.getVolume());
//        System.out.println(speaker2.getVolume());
//
//        speaker2.setVolume(22);
//
//        System.out.println(speaker1.getVolume());
//        System.out.println(speaker2.getVolume()); // 하나만 바꿔도 다른 하나도 바뀜 -> 동일한 인스턴스라는 것을 알 수 있음.

        Circle circle1 = new Circle(1,1,3);
        Circle circle2 = circle1.copy();

        System.out.println(circle1.getX() + ", "+circle1.getY() + ", " + circle1.getR());
        System.out.println(circle2.getX() + ", "+circle2.getY() + ", " + circle2.getR());

        Cat navi = new Cat();
        navi.setName("navi");
        navi.setAge(new Age(2021,3));

        //Cat yo = navi; // 주소가 같음 -> 얕은 복사
        Cat yo = navi.copy(); // 값을 복사해서 가져옴 -> 깊은 복사
        yo.setName("yo");
        yo.getAge().setYear(2022); // Age 에서는 깊은 복사가 이루어지지 않음 -> String, Integer에서는 자동으로 깊은 복사를 해주는 소스가 내장되어 있는 것 같음.
        yo.getAge().setValue(2); // Cat 클래스의 copy에서 직접 정의해줘야 한다.

        System.out.println(navi.getName());
        System.out.println(navi.getAge().getYear());
        System.out.println(navi.getAge().getValue());

        System.out.println(yo.getName());
        System.out.println(yo.getAge().getYear());
        System.out.println(yo.getAge().getValue());
    }
}
/*
Strategy Pattern
- 인터페이스
  - 기능에 대한 선언과 구현 분리
  - 기능을 사용할 수 있는 통로 제공
- 델리게이트
  - 위임하다.
- 전략 패턴
  - 여러 알고리즘을 하나의 추상적인 접근점을 만들어 접근 점에서 서로 교환 가능하도록 하는 패턴

Adapter Pattern
-
Template Method Pattern
- 알고리즘 구조를 메소드에 정의하고 하위 클래스에서 알고리즘 구조의 변경없이 알고리즘을 재정의 하는 패턴
- 구현하는 알고리즘이 일정한 프로세스가 있다.
- 구현하려는 알고리즘이 변경 가능성이 있다.
- 알고리즘을 여러 단계로 나눈다.
- 나눠진 알고리즘의 단계를 메소드로 선언한다.
- 알고리즘을 수행할 템플릿 메소드를 만든다.
- 하위 클래스에서 나눠진 메소드들을 구현한다.
 */

import adapter_pattern.Adapter;
import adapter_pattern.AdapterImpl;
import strategy_pattern.*;
import template_method_pattern.AbstGameConnectHelper;
import template_method_pattern.DefaultGameConnection;

public class Main {
    public static void main(String[] args) {

        // 전략 패턴
        // 인터페이스 선언 및 할당
//        Ainterface ainterface = new AinterfaceImpl();
//
//        ainterface.funcA(); // 통로
//
//        // 위임해서 구현
//        AObj aObj = new AObj();
//        aObj.funcAA();
//
//        GameCharacter character = new GameCharacter();
//        character.attack();
//
//        character.setWeapon(new Knife());
//        character.attack();
//
//        character.setWeapon(new Sword());
//        character.attack();
//
//        character.setWeapon(new Axe()); // 효율적으로 추가 가능
//        character.attack();

        //Math 클래스에 이미 도배, 반을 구하는 함수는 정의되어 있음
//        Adapter adapter = new AdapterImpl();
//        // 주어진 함수를 바로 사용하지 못하기 때문에 Adapter를 사용해서 변경한 뒤 사용
//        System.out.println(adapter.twiceOf(100.0f));
//        System.out.println(adapter.halfOf(100.0f));

//        AbstGameConnectHelper helper = new DefaultGameConnection();
//        // helper.connection 은 protected로 선언되었기 때문에 다른 패키지에서 접속 안됨.
//        helper.requestConnection("아이디 암호 등 접속 정보");
    }
}
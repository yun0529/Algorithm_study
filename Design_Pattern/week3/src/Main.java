/*
* 빌더 패턴
* 복잡한 단계를 거쳐야 생성되는 객체의 구현을 서브 클래스에게 넘겨주는 패턴
* 많은 인자를 가진 객체의 생성을 다른 객체의 도움으로 생성하는 패턴
*
* 추상 팩토리 패턴
* 생성 부분의 가상화 / 관련 있는 객체
* */

import Sam.SamFactory;
import abst_2.Button;
import abst_2.GuiFac;
import abst_2.TextArea;
import abstract_factory.BikeFactory;
import abstract_factory.Body;
import abstract_factory.Wheel;
import builder.Computer;
import builder.ComputerBuilder;
import builder.ComputerFactory;
import builder.LgGramBluePrint;
import concrete.FactoryInstance;
import gt.GtFactory;
import linux.LinuxGuiFac;
import mac.MacGuiFac;
import win.WinGuiFac;

public class Main {
    public static void main(String[] args) {

        ComputerFactory factory = new ComputerFactory();
        factory.setBluePrint(new LgGramBluePrint()); // factory가 blueprint를 가지고 make 함. factory or blueprint 둘 중 하나가 computer 를 가짐
        //factory.setBlueprint(new Sony~~());
        //factory.setBlueprint(new Samsung~~());
        //Computer computer = factory.makeAndGet();
        factory.make();
        Computer computer = factory.getComputer();

        // builder pattern
        // 실제로는 매우 복잡한 방식으로 생성될 거임. 그러니 이를 서브 클래스에서 생성하도록 함.
        //Computer computer = new Computer("i7", "16g", "256gb ssd");
        System.out.println(computer.toString());

        Computer computer2 = ComputerBuilder
                //.start()
                //.setCpu("i9")
                .startWith("i9")
                .setRam("32g")
                .setStorage("512gb ssd")
                .build();
        System.out.println(computer2.toString());

        //BikeFactory factoryy = new SamFactory();
        BikeFactory factoryy = new GtFactory(); // 이런 식으로 다른 자전거도 만들 수 있다.
        Body body = factoryy.createBody();
        Wheel wheel = factoryy.createWheel();

        System.out.println(body.getClass());
        System.out.println(wheel.getClass());

        //GuiFac fac = new LinuxGuiFac();
        //GuiFac fac = new MacGuiFac(); // 맥으로 바뀜
        GuiFac fac = new WinGuiFac(); // 이렇게 해도 추상 패턴을 잘 쓴다고 할 수 없다.

        // os에 따라서 알아서 win, linux, mac 을 전달한다면 추가적으로 건드릴 필요가 없음.
        // 이렇게만 사용해서 라이브러리 형식으로 사용함.
        System.out.println(System.getProperty("os.name")); // 현재 os를 반환해줌
        GuiFac faci = FactoryInstance.getGuiFac();

        Button btn = fac.createBtn();
        TextArea ta = fac.createTA();

        btn.click();
        System.out.println(ta.getText());
    }
}
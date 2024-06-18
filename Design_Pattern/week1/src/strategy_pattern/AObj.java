package strategy_pattern;

public class AObj { // 델리게이트

    Ainterface ainterface; //A 인터페이스에서 구현한다고 약속

    public AObj(){
        ainterface = new AinterfaceImpl();
    }
    public void funcAA(){
        ainterface.funcA(); // 다른 객체의 기능을 빌려서 사용하는것 -> 위임한다.
        ainterface.funcA();

//        System.out.println("AAA");
//        System.out.println("AAA");

        // ~ 기능이 필요합니다. 개발해주세요. -> 개발 위임
    }
}

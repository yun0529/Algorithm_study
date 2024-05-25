package facade;

public class Facade { // HelpSystem을 이용하는 main system
    private HelpSystem01 helpSystem01;
    private HelpSystem02 helpSystem02;
    private HelpSystem03 helpSystem03;

    public Facade() { // 퍼사드 호출시 helpSystem 생성
        helpSystem01 = new HelpSystem01();
        helpSystem02 = new HelpSystem02();
        helpSystem03 = new HelpSystem03();
    }
    public void process(){ // 프로세스를 진행하면 helpSystem 들이 도와주는 특정 프로세스가 진행됨
        helpSystem01.process();
        helpSystem02.process();
        helpSystem03.process();
    }
}

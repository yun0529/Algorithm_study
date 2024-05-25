package moss_no_bridge;

public class MorseCode {
    public void dot(){
        System.out.print(".");
        //System.call.shortBip(); // 이런 식으로 음성으로 하는 기능을 추가할 수 있음.
        // 그리고 이렇게 한다면 MoseCode2 , PrintMorsecode2 이렇게 클래스를 여러개 만들어야 하고, 유지 보수 또한 귀찮아짐.
    }
    public void dash(){
        System.out.print("-");
        //System.call.longBip();
    }
    public void space(){
        System.out.print(" ");
        //System.call.longTip();
    }
}

package moss_no_bridge;

import bridge.DefaultMCF;
import bridge.MorseCodeFunction;

public class PrintMoseCode extends MorseCode{

    public PrintMoseCode(MorseCodeFunction defaultMCF) {
        super();
    }

    //이름 출력
    public PrintMoseCode g(){
        dash();dash();dot();space();
        return this;
    }
    public PrintMoseCode a(){
        dot();dash();space();
        return this;
    }
    public PrintMoseCode r(){
        dot();dash();dot();space();
        return this;
    }
    public PrintMoseCode m(){
        dash();dash();space();
        return this;
    }

}

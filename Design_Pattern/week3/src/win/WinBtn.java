package win;

import abst_2.Button;

public class WinBtn implements Button {
    @Override
    public void click() {
        System.out.println("window 버튼");
    }
}

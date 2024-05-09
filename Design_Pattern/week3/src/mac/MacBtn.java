package mac;

import abst_2.Button;

public class MacBtn implements Button {
    @Override
    public void click() {
        System.out.println("맥 버튼");
    }
}

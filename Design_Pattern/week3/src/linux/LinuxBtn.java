package linux;

import abst_2.Button;

public class LinuxBtn implements Button {
    @Override
    public void click() {
        System.out.println("리눅스 버튼");
    }
}

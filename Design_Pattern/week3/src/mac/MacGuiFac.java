package mac;

import abst_2.Button;
import abst_2.GuiFac;
import abst_2.TextArea;

public class MacGuiFac implements GuiFac {
    @Override
    public Button createBtn() {
        // 리눅스 관련 네이티브 소스 작성 후 반환
        return new MacBtn();
    }

    @Override
    public TextArea createTA() {
        return new MacTA();
    }
}


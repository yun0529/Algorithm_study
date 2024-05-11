package concrete;

import abst_2.GuiFac;
import linux.LinuxGuiFac;
import mac.MacGuiFac;
import win.WinGuiFac;

public class FactoryInstance {

    // 이거는 외부에 노출되면 안됨.
    // 어떤 환경에서 돌리던지 동일하게 적용되어야 하기 때문에 건드릴 수 있게 하면 안됨.
    public static GuiFac getGuiFac() {
        switch (getOSCode()){
            case 0:
                return new MacGuiFac();
            case 1:
                return new LinuxGuiFac();
            case 2:
                return new WinGuiFac();
        }
        return null; // throw exception 할 수 있음
    }

    private static int getOSCode() {
        if(System.getProperty("os.name") == "Windows 11"){
            return 2;
        }else return 1; // 이런식으로 문자열에 따라 정규 표현식을 사용해서 넘겨주면 됨.
    }
}

//리눅스 패키지 내부 클래스들
//맥 패키지 내부 클래스들
//윈도우 패키지 내부 클래스들
//이 부분이 라이브러리 형태로 제공되기 때문에 해당 소스를 알 수 없음.

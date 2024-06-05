package observer2;

import javax.swing.text.View;
import java.util.Observable;

public class Button2 extends Observable { //  extends View, implement Observable 이런식으로 할 수 없음. 그래서 Observable을 상속해서 사용하기 힘들다.
    public void onClick(){
        setChanged(); // 변경사항이 있다는 알림
        notifyObservers();
    }
}

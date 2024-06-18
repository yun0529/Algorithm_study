/*
 * Observer Pattern
 * 옵저버 패턴을 통해 이벤트 발생 후 객체 외부에서 처리 할 수 있다.
 * 타겟 -> 옵저버 인터페이스를 가짐. 노티파이에서 옵저버를 호출해서 옵저버가 타겟 객체의 이벤트 처리를 확인하는 것.
 *
 * Mediator Pattern
 * 중재자 패턴을 통해 복잡한 관계를 간단한 관계로 구현한다.
 * M : n => 1 : 1
 * 문자 vs 그룹 채팅
 * 문자는 1 : 1로만 가능했음
 * 그룹 채팅은 모두 한번에 대화 가능
 * 기본 설계
 * 두개의 abs 클래스
 * mediator : 미리 구현된 것과 구현해야 하는 함수가 존재, 협력자를 리스트에 추가하는 함수 필요
 * 협업을 하는 객체 : 중재자가 누군지 알아야 중재자한테 내용을 보내고, 중재자는 협력자들 리스트를 가지기 때문에 사람들에게 전달.
 *  '' : 어떤 중재자에게 속할지 선택하는 함수, 중재자에게 알릴 수 있는 함수가 필요
 *
 */


import mediator.ChatColleague;
import mediator.ChatMediator;
import mediator.Colleague;
import mediator.Mediator;
import observer.Button;
import observer2.Button2;
import observer3.Button3;

import java.util.Observable;
import java.util.Observer;

public class Main {
    public static void main(String[] args) {
        Button button = new Button();

        //button.setOnClickListener(new ButtonClick()); // 이렇게도 쓰지만 익명 객체로도 많이 사용
        button.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick(Button button) {
                System.out.println(button + "is Clicked");
            }
        });
        button.onClick();

        // 옵저버 2
        //Observer observer // 업데이트 함수만 가짐. 업데이트 객체와 없데이트 객체가 보내는 파라미터를 받음(변경사항, 이벤트 등..)
        //Observable observable // 자바는 다중상속 X -> Observable만 상속하면 확장성이 떨어진다고 생각할 수 있지만 내부 내용이 괜찮아서 클래스로 하는 것도 나쁘지 않음.

        Button2 button2 = new Button2();
        button2.addObserver(new Observer() {
            @Override
            public void update(Observable o, Object arg) {
                System.out.println(o + "is Clicked");
            }
        });
        button2.onClick(); // Observable 클래스는 observable한 object를 표현하는 클래스이다. -> 우리가 알고있는 옵저버 패턴에 옵저버 할 수 있는 클래스가 구현되어 있는 것.
        button2.onClick(); //changed 맴버 변수가 true 일 때만 동작을 한다.
        button2.onClick();

        //옵저버 3
        // 1. 제네릭
        // 2. 델리게이트
        // 3. 내부에 옵저버를 넣는다.
        // 옵저버를 내부에 넣어서 연관이 있다는 것을 보여줌

        Button3 button3 = new Button3();
        button3.addObserver(new observer3.Observable.Observer<String>() {
            @Override
            public void update(observer3.Observable<String> o, String arg) {
                System.out.println(o+" is clicked");
            }
        });

        button3.onClick(); // setChanged()가 들어가야 출력이 된다.
        button3.onClick();
        button3.onClick();

        // 중재자 패턴
        Mediator mediator = new ChatMediator();

        Colleague colleague1 = new ChatColleague();
        Colleague colleague2 = new ChatColleague();
        Colleague colleague3 = new ChatColleague();

        colleague1.join(mediator);
        colleague2.join(mediator);
        colleague3.join(mediator);

        colleague1.sendData("AAA");
        colleague2.sendData("BBB");
        colleague3.sendData("CCC");

    }

}

class ButtonClick implements Button.OnClickListener{
    @Override
    public void onClick(Button button) {
        System.out.println(button + "is Clicked");
    }
}
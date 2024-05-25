/*
 * Visitor Pattern
 * 객체에서 처리를 분리해서 사용할 수 있다.
 * 클라이언트 - visitor, visitable 사용
 * visitor - visitable을 방문
 * visitable - visitor를 받아들임
 *
 * Chain of Responsibility
 * 다양한 처리 방식을 유연하게 연결 할 수 있다.
 * Handler(abs) 다음 처리할 Handler 객체를 가지고 있다.
 * 자신의 프로세스가 실패할 경우 다음 프로세스로 넘긴다.
 *
 * Facade Pattern
 * 복잡한 과정을 간단하게 표현한다.
 * 다양한 패키지에서 클래스를 제공받는다.
 * 퍼사드는 단순한 함수 인터페이스를 클라이언트에 제공한다.
 */

import chain_of_responsibility.*;
import facade.Facade;
import visitor.Visitable;
import visitor.VisitableA;
import visitor.Visitor;
import visitor.VisitorA;

import java.lang.reflect.Array;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        //VisitableA v1 = new VisitableA();

        ArrayList<Visitable> visitables = new ArrayList<Visitable>();
        visitables.add(new VisitableA(1));
        visitables.add(new VisitableA(2));
        visitables.add(new VisitableA(3));
        visitables.add(new VisitableA(4));
        visitables.add(new VisitableA(5));

        Visitor visitor = new VisitorA();

        int ageSum = 0;
        for(Visitable visitable : visitables){ // Visitor가 Visitable을 방문해서 특정 동작을 수행한다.
            //visitable.accept(visitor); // accept 내부의 visit이 수행하는 기능 -> 나이 더하기
            ageSum += ((VisitableA)visitable).getAge(); // 이렇게도 사용 가능
        }
        //System.out.println(((VisitorA) visitor).getAgeSum());
        // VisitorA 의 모양새를 알고 있지만 VisitorA의 클래스 수정 불가능.
        // 이럴 때 VisitorA 객체를 만들어주면 외부에서 구현 가능함.

        System.out.println(ageSum);

        Calculator plus = new PlusCalculator();
        Calculator sub = new SubCalculator();

        plus.setNextCalculator(sub);
        Request request1 = new Request(1,2,"+");
        Request request2 = new Request(10,2,"-"); // nextCalculator에 sub가 들어가 있음
        plus.process(request1);
        plus.process(request2);

        // 추상 사슬 패턴 2
        Attack attack = new Attack(100);

        Armor armor1 = new Armor(10);
        Armor armor2 = new Armor(15);

        armor1.setNextDefense(armor2);
        armor1.defense(attack);

        System.out.println(attack.getAmount()); // 아머 1, 2 모두 공격을 받은 것임
        //
        Defense defense = new Defense() {
            @Override
            public void defense(Attack attack) {
                int amount = attack.getAmount();
                attack.setAmount(amount -= 50);
            }
        };
        armor2.setNextDefense(defense); // 아머 1, 2 와 다른 armor를 갖고 있음 -> 추가 착용했다고 함

        // 두 번째 공격
        attack.setAmount(100);
        armor1.defense(attack);

        System.out.println(attack.getAmount()); //100 - 10 - 15 - 50 = 25가 된다.

        Facade facade = new Facade();
        facade.process();
        // helpSystem을 default로 한다면 패키지 내부에서만 사용 가능함.
        //HelpSystem01 => main에서 이런식으로 호출 불가.
    }
}
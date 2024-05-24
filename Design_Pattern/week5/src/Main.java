/*
 * Visitor Pattern
 * 객체에서 처리를 분리해서 사용할 수 있다.
 * 클라이언트 - visitor, visitable 사용
 * visitor - visitable을 방문
 * visitable - visitor를 받아들임
 *
 */

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
    }
}
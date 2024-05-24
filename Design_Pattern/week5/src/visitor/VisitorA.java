package visitor;

public class VisitorA implements Visitor{

    private int ageSum;
    public VisitorA(){
        ageSum = 0;
    }
    @Override
    public void visit(Visitable visitable) {
        if(visitable instanceof VisitableA){ // visitableA의 인스턴스를 돌아다니면서 나이를 더함
            ageSum += ((VisitableA)visitable).getAge();
        }else{
            //... 다른 작업들
        }
    }

    public int getAgeSum() {
        return ageSum;
    }
}

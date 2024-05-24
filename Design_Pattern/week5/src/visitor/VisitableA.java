package visitor;

public class VisitableA implements Visitable{

    private int age;

    public VisitableA(int age){
        super();
        this.age = age;
    }

    @Override
    public void accept(Visitor visitor) { // visitor가 방문할 수 있도록 함.
        visitor.visit(this);
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}

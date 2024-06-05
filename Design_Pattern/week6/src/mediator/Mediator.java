package mediator;

import java.util.ArrayList;
import java.util.List;

public abstract class Mediator {
    protected List<Colleague> colleagues;

    public Mediator(){
        colleagues = new ArrayList<>();
    }

    public boolean addColleague(Colleague colleague){
        if(colleague != null){
            return colleagues.add(colleague);
        }else{
            //throw new Exception(); 이렇게 예외를 날리는 것도 가능함.
            return false;
        }
    }
    public abstract void mediate(String data);
}

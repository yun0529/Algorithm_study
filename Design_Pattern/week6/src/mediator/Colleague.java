package mediator;

public abstract class Colleague {
    private Mediator mediator;

    public boolean join(Mediator mediator) {
        if(mediator == null){
            return false;
        }
        this.mediator = mediator;
        return mediator.addColleague(this);
    }
    public void sendData(String data){
        if(mediator != null){
            mediator.mediate(data);
        }

    }
    abstract public void handle(String data); // 해당 라이브러리를 제공받는 사람이 알아서 처리하도록 함.
}

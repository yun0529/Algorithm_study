package mediator;

public class ChatMediator extends Mediator{
    @Override
    public void mediate(String data) {
        for(Colleague colleague : colleagues){
            // 중재 가능성이 있는 정보 -> 걸러내는 등의 추가 작업을 수행
            colleague.handle(data);
        }
    }
}

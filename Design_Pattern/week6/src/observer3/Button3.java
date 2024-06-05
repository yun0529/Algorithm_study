package observer3;

public class Button3 {

    public Button3(){
        observable = new Observable<String>();
    }
    // Observable을 상속받지 않고 맴버 변수를 통해 델리게이트 해서 사용
    private Observable<String> observable; // 많은 경우에 이벤트가 어떻게 처리되었는지 내용을 남겨주긴 함
    public void addObserver(Observable.Observer<String> o){
        observable.addObserver(o);
    }

    public void notifyObservers() {
        observable.notifyObservers(null);
    }

    public void onClick(){
        observable.setChanged();
        notifyObservers();
    }
}

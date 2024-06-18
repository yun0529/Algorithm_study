package facade;

class HelpSystem01 {
    public HelpSystem01() { // 기본적으로는 복잡한 기능을 함.
        System.out.println("Call Constructor : " + getClass().getSimpleName());
    }
    public void process(){
        System.out.println("Call Process : " + getClass().getSimpleName());
    }
}

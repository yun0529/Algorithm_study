package singletone_pattern;

public class SystemSpeaker {
    // 하나만 있어야 하는 스피커 이기 때문에 static임
    static private SystemSpeaker instance;
    private int volume;

    private SystemSpeaker(){ // 외부에서 생성자 호출하면 안됨.
        volume = 5;
    }
    public static SystemSpeaker getInstance(){ // static 변수 다루기 위해 static으로 선언
        if(instance == null){
            // 시스템 스피커 -> 시스템에 스피커와 통신할 수 있는 작업 필요
            instance = new SystemSpeaker();
            System.out.println("새로 생성");
        }else{
            System.out.println("이미 생성");
        }


        return instance;
    }

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }
}

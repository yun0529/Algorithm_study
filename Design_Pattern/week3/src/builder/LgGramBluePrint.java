package builder;

public class LgGramBluePrint extends BluePrint{ // 설계도를 구현하는 부분

    private Computer computer;

    public LgGramBluePrint() {
        computer = new Computer("default", "default","default");
    }
    @Override
    public void setCpu() {
        computer.setCpu("17");
        // cpu="i7" 이런식으로 사용 가능
    }
    @Override
    public void setRam() {
        computer.setRam("8g");
    }
    @Override
    public void setStorage() {
        computer.setStorage("256g ssd");
    }
    public Computer getComputer(){
        return computer;
    }
}

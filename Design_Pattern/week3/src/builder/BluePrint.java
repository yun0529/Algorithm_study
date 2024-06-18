package builder;

public abstract class BluePrint { // 설계도 역할 -> 어떤 기능들이 필요한지 선언됨.


    abstract public void setCpu();
    abstract public void setRam();
    abstract public void setStorage();
    abstract public Computer getComputer();
}

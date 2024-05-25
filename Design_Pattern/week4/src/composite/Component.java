package composite;

public class Component { // 설계도 상으로는 인터페이스처럼 보이지만 만드는 사람 나름대로 클래스를 만들 수 있음.
    // 값을 가져야 하기 때문에 class로 생성한다.
    private String name;

    public Component(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}

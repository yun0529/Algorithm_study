package prototype_pattern;

public class Shape implements Cloneable{ // 자바에 기본적으로 명시되어 있는 함수 -> Object class

    private String id; // shape을 id로 컨트롤

    public void setId(String id) {
        this.id = id;
    }

    public String getId() {
        return id;
    }

}

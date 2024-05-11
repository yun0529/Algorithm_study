package prototype_pattern.deep_shallow;

public class Cat_ implements Cloneable {

    private String name;

    public Cat_ copy() throws CloneNotSupportedException {
        Cat_ ret = (Cat_) clone();

        return ret;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}

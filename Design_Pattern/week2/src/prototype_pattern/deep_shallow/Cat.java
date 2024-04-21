package prototype_pattern.deep_shallow;

public class Cat implements Cloneable {

    private String name;
    private Age age;

    public Age getAge() {
        return age;
    }

    public void setAge(Age age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
    public Cat copy() throws CloneNotSupportedException {
        Cat ret = (Cat) clone();
        ret.setAge(new Age(age.getYear(), age.getValue())); // age가 깊은복사 되도록 직접 명시해줌
        return ret;
    }
}

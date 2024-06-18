package abstract_factory;

public interface BikeFactory {
    public Body createBody();
    public Wheel createWheel(); // 추가로 생성하고 싶은 것이 있다면 더 만들면 된다.
}

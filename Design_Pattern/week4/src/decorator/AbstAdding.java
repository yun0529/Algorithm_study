package decorator;

public class AbstAdding implements IBeverage{ // 데코레이터임 -> 컴포넌트와 장식을 동일시함

    private IBeverage base; // 밖에서 볼 때는 IBeverage 처럼 보임

    public AbstAdding(IBeverage base) {
        super();
        this.base = base;
    }

    @Override
    public int getTotalPrice() {
        return base.getTotalPrice();
    }
    protected IBeverage getBase(){
        return base;
    }
}

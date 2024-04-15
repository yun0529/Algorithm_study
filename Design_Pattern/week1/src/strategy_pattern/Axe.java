package strategy_pattern;

public class Axe implements Weapon{

    @Override
    public void attack() {
        System.out.println("도끼 공격");
    }
}

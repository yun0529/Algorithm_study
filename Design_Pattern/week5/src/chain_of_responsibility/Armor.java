package chain_of_responsibility;

public class Armor implements Defense{

    private Defense nextDefense;
    private float def;
    public Armor() {}
    public Armor(float def) {
        this.def = def;
    }
    public void setDef(float def) {
        this.def = def;
    }

    @Override
    public void defense(Attack attack) {
        process(attack); // 따로 처리하지 않고 nextDefense 를 무조건 호출함 -> 하나의 객체만 책임을지지 않아도 됨
        if(nextDefense != null){
            nextDefense.defense(attack);
        }
    }
    private void process(Attack attack){
        int amount = attack.getAmount();
        //amount*= def;
        //amount-= 10; // 이런식으로 간단하게도 가능
        amount-= def;
        attack.setAmount(amount);
    }
    public void setNextDefense(Defense nextDefense){
        this.nextDefense = nextDefense;
    }
}

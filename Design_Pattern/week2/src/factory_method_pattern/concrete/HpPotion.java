package factory_method_pattern.concrete;

import factory_method_pattern.framework.Item;

public class HpPotion implements Item {
    @Override
    public void use() {
        System.out.println("체력 회복!");
    }
}

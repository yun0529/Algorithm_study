package factory_method_pattern.concrete;

import factory_method_pattern.framework.Item;

public class MpPotion implements Item {
    @Override
    public void use() {
        System.out.println("마력 회복!");
    }
}

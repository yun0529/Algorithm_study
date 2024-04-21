package factory_method_pattern.framework;

public abstract class ItemCreator {

    //팩토리 메소드
    public Item create(){

        Item item;

        // 템플릿 메소드처럼 단계 1 ~ 3 으로 나눠진다.
        requestItemsInfo();
        item = createItem();
        createItemLog();

        return item;
    }

    abstract protected void requestItemsInfo(); // 아이템 정보 요청

    abstract protected void createItemLog(); // 아이템 복제 방지를 위해 데이터 베이스에 아이템 생성

    abstract protected Item createItem(); // 아이템 생성하는 알고리즘
}

package gt;

import abstract_factory.BikeFactory;
import abstract_factory.Body;
import abstract_factory.Wheel;

public class GtFactory implements BikeFactory {
    @Override
    public Body createBody() {
        return new GtBody();
    }

    @Override
    public Wheel createWheel() {
        return new GtWheel();
    }
}

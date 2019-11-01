#include "Form.h"

Form::Form() : xCenter(0.0), yCenter(0.0) {

}

void Form::move(double dX, double dY) {
	this->xCenter += dX;
	this->yCenter += dY;
}

Box & Form::getBoxRef() {
	return box;
}

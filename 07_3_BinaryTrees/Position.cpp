#include "Position.h"

Elem& Position::operator*(){
    return v->elt;
}
Position Position::left() const {
    return Position(v->left);
}
Position Position::right() const {
    return Position(v->right);
}
Position Position::parent() const {
    return Position(v->par);
}
bool Position::isRoot() const {
    return v->par == NULL;
}

bool Position::isExternal() const {
    return v-> left == NULL && v->right == NULL;
}
void Position::setItem(Elem e) {
    v->elt = e;
}
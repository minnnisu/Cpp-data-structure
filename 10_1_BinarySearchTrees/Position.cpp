#include "Position.h"

Entry& Position::operator*() const{
    return v->elt;
}

bool Position::operator==(const Position& p) const{
    return v == p.v;
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

bool Position::isInternal() const {
    return !this->isExternal();
}

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int n) {
    this->_fixedPointValue = n << _fractionalBits;
}

Fixed::Fixed(const float f) {
    this->_fixedPointValue = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src) {
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (float)(1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

bool Fixed::operator>(const Fixed& rhs) const {
    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const {
    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const {
    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return this->getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++(void) {
    ++this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->_fixedPointValue++;
    return tmp;
}

Fixed& Fixed::operator--(void) {
    --this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->_fixedPointValue--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& rhs) {
    out << rhs.toFloat();
    return out;
}
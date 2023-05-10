#include<iostream>
using namespace std;
class order{
  int orderID;
    string deliveryLocation;
    double discountPercentage;
    double price;
  public:
  Order(int id, double p) {
      orderID = id;
      price = p;
    }
  void setDeliveryLocation(string location) {
      deliveryLocation = location;
    }

    void setDiscountPercentage(double discount) {
      discountPercentage = discount;
    }

    string getDeliveryLocation() {
      return deliveryLocation;
    }

    double getDiscountPercentage() {
      return discountPercentage;
    }

    double getTotalPayableAmount() {
      double totalPayableAmount = price - (price * discountPercentage / 100) + 50;
      return totalPayableAmount;
    }
  void displayOrder() {
      cout << "Order ID: " << orderID << endl;
      cout << "Delivery Location: " << deliveryLocation << endl;
      cout << "Total Payable Amount: $" << getTotalPayableAmount() << endl;
    }
};
int main() {
  int orderId;
  double price;
  string location;
  double discount;

  cout << "Enter Order ID: ";
  cin >> orderId;

  cout << "Enter Price: ";
  cin >> price;

  Order order(orderId, price);

  cout << "Enter Delivery Location: ";
  cin >> location;
  order.setDeliveryLocation(location);

  cout << "Enter Discount Percentage: ";
  cin >> discount;
  order.setDiscountPercentage(discount);

  order.displayOrder();

  return 0;
}

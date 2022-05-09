class Customer:
       def __init__ (self,cust_name, products_list):

                     self.cust_name = cust_name
                     self.products_list = products_list

       def purchase_products(self):
                     total_cost = 0
                     discount = 50

                     for product in self.products_list:
                            price = product.identify_cost ()
                            if price != -1:
                                   total_cost += (price-discount)
                     print (total_cost)

class Product:

       product_list = ['Mobile Phone', 'Refrigerator', 'Laptop', 'Water Heater']

       price_list = [10000, 30000, 28000, 12000]

       def __init__(self,product_name):
              self.product_name = product_name

       def identify_cost (self):
              delivery=200

              for index in range (len (Product.product_list)):
                     if Product.product_list[index].lower () == self.product_name.lower():
                            cost = Product.price_list[index]+delivery
                            return cost
              return -1

prod_refl = Product ('laptop')
prod_ref2 = Product ('Mobile Phone')
prod_ref3 = Product ('refrigerator')
Customer('Jack', [prod_refl,prod_ref2,prod_ref3]).purchase_products()
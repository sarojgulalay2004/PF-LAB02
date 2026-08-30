#include<stdio.h>
int main()

{

int tea_quantity = 3;
float tea_unit_price = 60.00;
int samosa_quantity = 4;
float samosa_unit_price = 40.50;
int chicken_roll_quantity = 2;
float chicken_roll_unit_price = 120.00;
float tea_subtotal = tea_quantity*tea_unit_price;
float samosa_subtotal = samosa_quantity*samosa_unit_price;
float chicken_roll_subtotal = chicken_roll_quantity*chicken_roll_unit_price;
float bill_subtotal = tea_subtotal+samosa_subtotal+chicken_roll_subtotal;
float sales_tax = 0.16*bill_subtotal;
float payable_amount = bill_subtotal+sales_tax;

printf("===============FAST CAFETERIA RECEIPT====================\nItem\tQuantity\tUnit Price (PKR)\tSuBtotal (PKR)\n---------------------------------------------------------\nTea\t%d\t\t%.2f\t\t\t%.2f\nSamosa\t%d\t\t%.2f\t\t\t%.2f\nChicken Roll  %d\t\t%.2f\t\t\t%.2f\n--------------------------------------------------\nSubtotal:\t\t\t\tPKR %.2f\nGST (16%%)\t\t\t\tPKR %.2f\n--------------------------------------------\nGrand Total:\t\t\tPKR %.2f\n=================THANK YOU FOR YOUR VISIT=================",tea_quantity,tea_unit_price,tea_subtotal,samosa_quantity,samosa_unit_price,samosa_subtotal,chicken_roll_quantity,chicken_roll_unit_price,chicken_roll_subtotal,bill_subtotal,sales_tax,payable_amount);


 
return 0;

}


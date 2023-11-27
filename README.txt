Bitcoin Exchange Rate Info
=======================


What is this module about?
-------------------------

A module that fetches the current Bitcoin exchange rate in USD.


How To Use The module Bitcoin Exchange Rate Info
------------------------------------------------

In order to use it you need:

1. Enable the module features and the feature "Content Type: Bitcoin Daily".

2. Enable the module itself. There will be an internal function used to fetch
the Bitcoin exchagne rate in USD in real time. See the
"__bitcoin_exchange_rate_fetch_bitcoin_usd."

3. Create a new node of the type "Bitcoin Daily". After the save there should be
the proper echange rate value into the field "Todays Bitcoin Rate in USD".


How To Install The Module
-------------------------

1. Install Bitcoin Exchange Rate Info (unpacking it to your Drupal
/sites/all/modules directory if you're installing by hand, for example).

2. Enable the module in Admin menu > Site building > Modules.

3. Use it.

Troubleshooting The Module
--------------------------

In case there are issues with fetching the Bitcoin data, try to access the page
/admin/reports/dblog and search the logs there the "Type" is this one
"bitcoin_exchange_rate"

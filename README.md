CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Troubleshooting
 * Maintainers

INTRODUCTION
------------

 The module `Bitcoin Exchange Rate Info` is used to fetch the current Bitcoin
 exchange rate in USD.

REQUIREMENTS
-------------------

 * drupal:features
 * content_type_bitcoin_daily

INSTALLATION
------------

 * Install as usual, see
   https://drupal.org/documentation/install/modules-themes/modules-7 for further
   information.

CONFIGURATION
-------------

 In order to use it you need:

 * Enable the module features and the feature "Content Type: Bitcoin Daily".
 * Enable the module itself. There will be an internal function used to fetch
 the Bitcoin exchagne rate in USD in real time. See the
 "__bitcoin_exchange_rate_fetch_bitcoin_usd."
 * Create a new node of the type "Bitcoin Daily". After the save there should be
 the proper echange rate value into the field "Todays Bitcoin Rate in USD".

TROUBLESHOOTING
---------------

 * For error handling, check the `/admin/reports/dblog`, channel
 `bitcoin_exchange_rate`.


MAINTAINERS
-----------

Current maintainers:

* [Vesterli Andrei](https://www.drupal.org/u/andreivesterli)

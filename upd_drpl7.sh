#!/bin/bash
# Automatically syncs drupal7 production environment with your dev env
# set -x

ROOT=~/sites/drupal7
SRC='~/www/prod/drupal7'
DOMAIN=sanantoniononprofitcouncil.org

rsync -r sananto4@$DOMAIN:~/drupal7.db :$SRC/sites/default/files/* $ROOT/sites/default/files/
mv $ROOT/sites/default/files/drupal7.db ~/
mysql drupal7 -u root -proot < ~/drupal7.db
cp $ROOT/sites/default/default.settings.php  $ROOT/sites/default/settings.php 
cd $ROOT
drush updb

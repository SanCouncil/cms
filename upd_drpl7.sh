#!/bin/bash
# Automatically syncs drupal7 production environment with your dev env

ROOT='~/sites/drupal7'
SRC='~/www/prod/drupal7'
rsync -r sananto4@sancouncil.org:~/drupal7.db :$SRC/sites/default/files/* $ROOT/sites/default/files/
mv $ROOT/sites/default/files/drupal7.db ~/
mysql drupal7 -u root -proot < ~/drupal7.db
cp $ROOT/sites/default/default.settings.php $ROOT/sites/default/settings.php 
cd $ROOT
drush updb

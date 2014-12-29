#/bin/bash
# Automatically syncs drupal7 production environment with your dev env

rsync sananto4@sancouncil.org:~/drupla7.db ~/ :~/www/prod/drupal7/sites/default/files/* ~/sites/drupal7/sites/default/files/
mysql drupal7 -u root -proot < ~/drupal7.db

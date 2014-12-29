#/bin/bash
# Automatically syncs drupal7 production environment with your dev env

rsync -r sananto4@sancouncil.org:~/drupal7.db :~/www/prod/drupal7/sites/default/files/* ~/sites/drupal7/sites/default/files/
mv ~/sites/drupal7/sites/default/files/drupal7.db ~/
mysql drupal7 -u root -proot < ~/drupal7.db

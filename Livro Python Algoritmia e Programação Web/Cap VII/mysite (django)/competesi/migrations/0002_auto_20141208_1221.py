# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models, migrations


class Migration(migrations.Migration):

    dependencies = [
        ('competesi', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='funcionario',
            old_name='codf',
            new_name='codfunc',
        ),
        migrations.RenameField(
            model_name='taxionomia',
            old_name='competencias',
            new_name='subcomp',
        ),
        migrations.RemoveField(
            model_name='areaap',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='areaap',
            name='author',
        ),
        migrations.RemoveField(
            model_name='areaap',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='areaap',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='areaap',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='bibliografia',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='bibliografia',
            name='author',
        ),
        migrations.RemoveField(
            model_name='bibliografia',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='bibliografia',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='bibliografia',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='competencia',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='competencia',
            name='author',
        ),
        migrations.RemoveField(
            model_name='competencia',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='competencia',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='competencia',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='evidencia',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='evidencia',
            name='author',
        ),
        migrations.RemoveField(
            model_name='evidencia',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='evidencia',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='evidencia',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='funcionario',
            name='author',
        ),
        migrations.RemoveField(
            model_name='funcionario',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='funcionario',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='funcionario',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='projeto',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='projeto',
            name='author',
        ),
        migrations.RemoveField(
            model_name='projeto',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='projeto',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='projeto',
            name='updated_at',
        ),
        migrations.RemoveField(
            model_name='taxionomia',
            name='acronym',
        ),
        migrations.RemoveField(
            model_name='taxionomia',
            name='author',
        ),
        migrations.RemoveField(
            model_name='taxionomia',
            name='created_at',
        ),
        migrations.RemoveField(
            model_name='taxionomia',
            name='expire_at',
        ),
        migrations.RemoveField(
            model_name='taxionomia',
            name='updated_at',
        ),
        migrations.AlterField(
            model_name='areaap',
            name='descricao',
            field=models.TextField(blank=True, null=True),
            preserve_default=True,
        ),
    ]

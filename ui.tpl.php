<?php foreach($folders as $delta => $folder): ?>
  <div class="filer_folder" data-id="<?php print $folder->folder_id; ?>">
    <a href="<?php print $folder->folder_id; ?>">
      <div class="filer_folder_icon"></div>
    </a>
    <div class="filer_folder_label"><?php print $folder->name; ?></div>
  </div>
<?php endforeach; ?>

<?php foreach($files as $delta => $file): ?>
  <div class="filer_file" data-id="<?php print $file->fid; ?>">
    <div class="filer_file_icon"><?php print $file->content; ?></div>
    <div class="filer_file_label"><?php print $file->filename; ?></div>
  </div>
<?php endforeach; ?>
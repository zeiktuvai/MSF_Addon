let modcpp = HEMTT_VFS.join("mod.cpp").open_file().read();
let verfile = HEMTT_VFS.join("version").open_file().read();

if HEMTT.is_release() {
    let ver = HEMTT.project().version().to_string_short();
    modcpp.replace("0.0.0", ver);
    verfile.replace("0.0.0", ver);
} else {
    let ver = HEMTT.project().version().to_string_short() + " - Dev Build";
    modcpp.replace("0.0.0", ver);
    verfile.replace("0.0.0", ver);
}

HEMTT_VFS.join("mod.cpp").create_file().write(modcpp);
HEMTT_VFS.join("version").create_file().write(verfile);
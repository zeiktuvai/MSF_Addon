if HEMTT.is_build() || HEMTT.is_release() {
    let modcpp = HEMTT_VFS.join("mod.cpp").open_file().read();
    let cfg = HEMTT_VFS.join("addons").join("units").join("config.cpp").open_file().read();
    let ver = HEMTT.project().version().major() + "." + HEMTT.project().version().minor() + "." + HEMTT.project().version().patch();
    
    if HEMTT.is_release() {
        modcpp.replace("0.0.0", ver);
        cfg.replace("0.0.0", ver);
    } else {
        let devver = ver + " - Dev Build";
        modcpp.replace("0.0.0", devver);
        cfg.replace("0.0.0", devver);
    }
    
    HEMTT_VFS.join("mod.cpp").create_file().write(modcpp);
    HEMTT_VFS.join("addons").join("units").join("config.cpp").create_file().write(cfg);
}